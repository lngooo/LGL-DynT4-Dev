@.str = constant [5 x i8] c"%c%d\00"
define dso_local void @GrYq6(i8* %0, i8* %1) {
  %3 = alloca i8*
  %4 = alloca i8*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i8
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  store i8* %0, i8** %3
  store i8* %1, i8** %4
  %12 = load i8*, i8** %3
  %13 = call i64 @strlen(i8* %12)
  %14 = trunc i64 %13 to i32
  store i32 %14, i32* %5
  %15 = load i32, i32* %5
  %16 = icmp eq i32 %15, 0
  br i1 %16, label %17, label %18
17:
  store i32 1, i32* %6
  br label %76
18:
  %19 = load i8*, i8** %3
  %20 = getelementptr inbounds i8, i8* %19, i64 0
  %21 = load i8, i8* %20
  store i8 %21, i8* %7
  store i32 0, i32* %8
  store i32 0, i32* %9
  store i32 0, i32* %10
  br label %25
25:
  %26 = load i32, i32* %10
  %27 = load i32, i32* %5
  %28 = icmp sle i32 %26, %27
  br i1 %28, label %31, label %29
29:
  store i32 2, i32* %6
  br label %73
31:
  %32 = load i8*, i8** %3
  %33 = load i32, i32* %10
  %34 = sext i32 %33 to i64
  %35 = getelementptr inbounds i8, i8* %32, i64 %34
  %36 = load i8, i8* %35
  %37 = sext i8 %36 to i32
  %38 = load i8, i8* %7
  %39 = sext i8 %38 to i32
  %40 = icmp eq i32 %37, %39
  br i1 %40, label %41, label %48
41:
  %42 = load i32, i32* %10
  %43 = load i32, i32* %5
  %44 = icmp slt i32 %42, %43
  br i1 %44, label %45, label %48
45:
  %46 = load i32, i32* %8
  %47 = add nsw i32 %46, 1
  store i32 %47, i32* %8
  br label %69
48:
  %49 = load i8*, i8** %4
  %50 = load i32, i32* %9
  %51 = sext i32 %50 to i64
  %52 = getelementptr inbounds i8, i8* %49, i64 %51
  %53 = load i8, i8* %7
  %54 = sext i8 %53 to i32
  %55 = load i32, i32* %8
  %56 = call i32 (i8*, i8*, ...) @sprintf(i8* %52, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @.str, i64 0, i64 0), i32 %54, i32 %55)
  %57 = load i32, i32* %9
  %58 = add nsw i32 %57, %56
  store i32 %58, i32* %9
  %59 = load i32, i32* %10
  %60 = load i32, i32* %5
  %61 = icmp slt i32 %59, %60
  br i1 %61, label %62, label %68
62:
  %63 = load i8*, i8** %3
  %64 = load i32, i32* %10
  %65 = sext i32 %64 to i64
  %66 = getelementptr inbounds i8, i8* %63, i64 %65
  %67 = load i8, i8* %66
  store i8 %67, i8* %7
  store i32 1, i32* %8
  br label %68
68:
  br label %69
69:
  br label %70
70:
  %71 = load i32, i32* %10
  %72 = add nsw i32 %71, 1
  store i32 %72, i32* %10
  br label %25
73:
  store i32 0, i32* %6
  br label %76
76:
  %78 = load i32, i32* %6
  switch i32 %78, label %80 [
    i32 0, label %79
    i32 1, label %79
  ]
79:
  ret void
80:
  unreachable
}
declare i64 @strlen(i8*)
declare i32 @sprintf(i8*, i8*, ...)
