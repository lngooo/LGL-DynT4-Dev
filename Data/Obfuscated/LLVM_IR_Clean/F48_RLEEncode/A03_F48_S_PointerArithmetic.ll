@.str = constant [3 x i8] c"%d\00"
define dso_local void @Rth(i8* %0, i8* %1) {
  %3 = alloca i8*
  %4 = alloca i8*
  %5 = alloca i8*
  %6 = alloca i8*
  %7 = alloca i8*
  %8 = alloca i32
  store i8* %0, i8** %3
  store i8* %1, i8** %4
  %10 = load i8*, i8** %3
  store i8* %10, i8** %5
  %12 = load i8*, i8** %4
  store i8* %12, i8** %6
  br label %13
13:
  %14 = load i8*, i8** %5
  %15 = load i8, i8* %14
  %16 = icmp ne i8 %15, 0
  br i1 %16, label %17, label %63
17:
  %19 = load i8*, i8** %5
  store i8* %19, i8** %7
  br label %20
20:
  %21 = load i8*, i8** %5
  %22 = getelementptr inbounds i8, i8* %21, i64 1
  %23 = load i8, i8* %22
  %24 = sext i8 %23 to i32
  %25 = icmp ne i32 %24, 0
  br i1 %25, label %26, label %35
26:
  %27 = load i8*, i8** %5
  %28 = getelementptr inbounds i8, i8* %27, i64 1
  %29 = load i8, i8* %28
  %30 = sext i8 %29 to i32
  %31 = load i8*, i8** %5
  %32 = load i8, i8* %31
  %33 = sext i8 %32 to i32
  %34 = icmp eq i32 %30, %33
  br label %35
35:
  %36 = phi i1 [ false, %20 ], [ %34, %26 ]
  br i1 %36, label %37, label %40
37:
  %38 = load i8*, i8** %5
  %39 = getelementptr inbounds i8, i8* %38, i32 1
  store i8* %39, i8** %5
  br label %20
40:
  %42 = load i8*, i8** %5
  %43 = load i8*, i8** %7
  %44 = ptrtoint i8* %42 to i64
  %45 = ptrtoint i8* %43 to i64
  %46 = sub i64 %44, %45
  %47 = add nsw i64 %46, 1
  %48 = trunc i64 %47 to i32
  store i32 %48, i32* %8
  %49 = load i8*, i8** %7
  %50 = load i8, i8* %49
  %51 = load i8*, i8** %6
  %52 = getelementptr inbounds i8, i8* %51, i32 1
  store i8* %52, i8** %6
  store i8 %50, i8* %51
  %53 = load i8*, i8** %6
  %54 = load i32, i32* %8
  %55 = call i32 (i8*, i8*, ...) @sprintf(i8* %53, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str, i64 0, i64 0), i32 %54)
  %56 = load i8*, i8** %6
  %57 = sext i32 %55 to i64
  %58 = getelementptr inbounds i8, i8* %56, i64 %57
  store i8* %58, i8** %6
  %59 = load i8*, i8** %5
  %60 = getelementptr inbounds i8, i8* %59, i32 1
  store i8* %60, i8** %5
  br label %13
63:
  %64 = load i8*, i8** %6
  store i8 0, i8* %64
  ret void
}
declare i32 @sprintf(i8*, i8*, ...)
