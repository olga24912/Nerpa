# Generated by Django 2.0.6 on 2018-06-12 07:56

from django.db import migrations, models


class Migration(migrations.Migration):

    initial = True

    dependencies = [
    ]

    operations = [
        migrations.CreateModel(
            name='MatchingResult',
            fields=[
                ('id', models.AutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('request_id', models.IntegerField()),
                ('img', models.ImageField(upload_to='')),
                ('innerTableHTML', models.TextField()),
                ('mol_id', models.TextField()),
                ('extra_info', models.TextField()),
                ('genome_id', models.TextField()),
                ('score', models.IntegerField()),
                ('AA_number', models.IntegerField()),
                ('AA_matching_number', models.IntegerField()),
            ],
        ),
    ]
