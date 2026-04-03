%struct.e = type { i32, i32, i32 }
@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @CDBn(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca %struct.e
  %6 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  %8 = getelementptr inbounds %struct.e, %struct.e* %5, i32 0, i32 0
  %9 = load i32*, i32** %3
  %10 = getelementptr inbounds i32, i32* %9, i64 0
  %11 = load i32, i32* %10
  store i32 %11, i32* %8
  %12 = getelementptr inbounds %struct.e, %struct.e* %5, i32 0, i32 1
  store i32 0, i32* %12
  %13 = getelementptr inbounds %struct.e, %struct.e* %5, i32 0, i32 2
  %14 = load i32*, i32** %3
  %15 = getelementptr inbounds i32, i32* %14, i64 0
  %16 = load i32, i32* %15
  store i32 %16, i32* %13
  store i32 1, i32* %6
  br label %18
18:
  %19 = load i32, i32* %6
  %20 = load i32, i32* %4
  %21 = icmp slt i32 %19, %20
  br i1 %21, label %24, label %22
22:
  br label %48
24:
  %25 = load i32*, i32** %3
  %26 = load i32, i32* %6
  %27 = sext i32 %26 to i64
  %28 = getelementptr inbounds i32, i32* %25, i64 %27
  %29 = load i32, i32* %28
  %30 = getelementptr inbounds %struct.e, %struct.e* %5, i32 0, i32 1
  store i32 %29, i32* %30
  %31 = getelementptr inbounds %struct.e, %struct.e* %5, i32 0, i32 1
  %32 = load i32, i32* %31
  %33 = getelementptr inbounds %struct.e, %struct.e* %5, i32 0, i32 2
  %34 = load i32, i32* %33
  %35 = icmp sgt i32 %32, %34
  br i1 %35, label %36, label %39
36:
  %37 = getelementptr inbounds %struct.e, %struct.e* %5, i32 0, i32 1
  %38 = load i32, i32* %37
  br label %42
39:
  %40 = getelementptr inbounds %struct.e, %struct.e* %5, i32 0, i32 2
  %41 = load i32, i32* %40
  br label %42
42:
  %43 = phi i32 [ %38, %36 ], [ %41, %39 ]
  %44 = getelementptr inbounds %struct.e, %struct.e* %5, i32 0, i32 2
  store i32 %43, i32* %44
  br label %45
45:
  %46 = load i32, i32* %6
  %47 = add nsw i32 %46, 1
  store i32 %47, i32* %6
  br label %18
48:
  %49 = getelementptr inbounds %struct.e, %struct.e* %5, i32 0, i32 2
  %50 = load i32, i32* %49
  ret i32 %50
}
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  %6 = alloca i32
  %7 = alloca i32*
  %8 = alloca i32
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %9 = load i32, i32* %4
  %10 = icmp slt i32 %9, 2
  br i1 %10, label %11, label %12
11:
  store i32 0, i32* %3
  br label %53
12:
  %14 = load i32, i32* %4
  %15 = sub nsw i32 %14, 1
  store i32 %15, i32* %6
  %17 = load i32, i32* %6
  %18 = sext i32 %17 to i64
  %19 = mul i64 %18, 4
  %20 = call noalias i8* @malloc(i64 %19)
  store i32* %21, i32** %7
  store i32 0, i32* %8
  br label %23
23:
  %24 = load i32, i32* %8
  %25 = load i32, i32* %6
  %26 = icmp slt i32 %24, %25
  br i1 %26, label %29, label %27
27:
  br label %44
29:
  %30 = load i8**, i8*** %5
  %31 = load i32, i32* %8
  %32 = add nsw i32 %31, 1
  %33 = sext i32 %32 to i64
  %34 = getelementptr inbounds i8*, i8** %30, i64 %33
  %35 = load i8*, i8** %34
  %36 = call i32 @atoi(i8* %35)
  %37 = load i32*, i32** %7
  %38 = load i32, i32* %8
  %39 = sext i32 %38 to i64
  %40 = getelementptr inbounds i32, i32* %37, i64 %39
  store i32 %36, i32* %40
  br label %41
41:
  %42 = load i32, i32* %8
  %43 = add nsw i32 %42, 1
  store i32 %43, i32* %8
  br label %23
44:
  %45 = load i32*, i32** %7
  %46 = load i32, i32* %6
  %47 = call i32 @CDBn(i32* %45, i32 %46)
  %48 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %47)
  %49 = load i32*, i32** %7
  call void @free(i8* %50)
  store i32 0, i32* %3
  br label %53
53:
  %54 = load i32, i32* %3
  ret i32 %54
}
declare noalias i8* @malloc(i64)
define available_externally i32 @atoi(i8* nonnull %0) {
  %2 = alloca i8*
  store i8* %0, i8** %2
  %3 = load i8*, i8** %2
  %4 = call i64 @strtol(i8* %3, i8** null, i32 10)
  %5 = trunc i64 %4 to i32
  ret i32 %5
}
declare i32 @printf(i8*, ...)
declare void @free(i8*)
declare i64 @strtol(i8*, i8**, i32)
